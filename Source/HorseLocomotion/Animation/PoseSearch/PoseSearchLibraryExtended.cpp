// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/PoseSearch/PoseSearchLibraryExtended.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <Kismet/GameplayStatics.h>
void UPoseSearchLibraryExtended::DrawPredictedTrajectory(ACharacter* Character, const FVector2D& Input, float SteeringStrength)
{
    const float PredictionTime = 2.0f;
    const float TimeStep = 0.2f;
    FVector CameraForward;
    if (APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(Character, 0))
    {
        CameraForward = CameraManager->GetCameraRotation().Vector();
    }

    const FVector Forward = CameraForward;
    const FVector Right = Character->GetActorRightVector();

    const float ForwardInput = Input.Y;
    const float SteeringInput = Input.X;

    FVector Position = Character->GetActorLocation();
    FVector Velocity = Character->GetCharacterMovement()->Velocity;

    FVector PreviousPosition = Position;

    for (float Time = 0.0f; Time < PredictionTime; Time += TimeStep)
    {
        // Simulate the same acceleration as AddInputVector
        FVector Acceleration =
            Forward * ForwardInput +
            Right * SteeringInput * SteeringStrength;

        // Integrate velocity
        Velocity += Acceleration * TimeStep;

        // Integrate position
        Position += Velocity * TimeStep;

        DrawDebugLine(
            Character->GetWorld(),
            PreviousPosition,
            Position,
            FColor::Green,
            false,
            0.0f,
            0,
            3.0f
        );

        DrawDebugSphere(
            Character->GetWorld(),
            Position,
            5.0f,
            8,
            FColor::Yellow,
            false,
            0.0f
        );

        PreviousPosition = Position;
    }
}
