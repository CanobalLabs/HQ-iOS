//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark -

//
// File: Payload/HQ-iOS.app/Frameworks/WordsBubbleState.framework/WordsBubbleState
// UUID: EDE90745-C7CB-3709-B823-12E04CEF54E2
//
//                           Arch: arm64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 0.0.0.0.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: /usr/lib/swift
//                               = /usr/lib/swift
//                       Run path: @executable_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/WordsBubbleState.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/WordsBubbleState.framework/Frameworks
//                       Run path: @executable_path/../../Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/WordsBubbleState.framework/../../Frameworks
//                       Run path: @executable_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/WordsBubbleState.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/WordsBubbleState.framework/Frameworks
//

@protocol NSObject
@property(nonatomic, readonly) NSString *description;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;

@optional
@property(nonatomic, readonly) NSString *debugDescription;
@end

@interface _TtC16WordsBubbleState5Badge : UIButton
{
    // Error parsing type: , name: type
    // Error parsing type: , name: displayTime
}

- (void)traitCollectionDidChange:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface _TtC16WordsBubbleState24WordsLayoutConfiguration : _$s5HQKit19LayoutConfigurationCN
{
}

- (id)init;

@end

@interface _TtC16WordsBubbleState32BubbleContainerAnimationSettings : _TtCs12_SwiftObject
{
    // Error parsing type: , name: oversizedBubble
    // Error parsing type: , name: targetBubbleState
    // Error parsing type: , name: bubbleView
}

@end

@interface _TtC16WordsBubbleState27BubbleViewAnimationSettings : _TtCs12_SwiftObject
{
    // Error parsing type: , name: oversizedBubble
    // Error parsing type: , name: bubbleView
    // Error parsing type: , name: targetBubbleState
}

@end

@interface _TtC16WordsBubbleState22StateChangeBubbleEvent : _TtC16WordsBubbleState20BubbleAnimationEvent
{
    // Error parsing type: , name: targetState
    // Error parsing type: , name: oversizedBubble
    // Error parsing type: , name: animated
    // Error parsing type: , name: viewAnimation
    // Error parsing type: , name: stateDelegate
}

- (void).cxx_destruct;
- (id)init;

@end

@interface _TtC16WordsBubbleState10BadgeEvent : _TtC16WordsBubbleState20BubbleAnimationEvent
{
    // Error parsing type: , name: badge
    // Error parsing type: , name: timer
}

- (void).cxx_destruct;
- (id)init;
- (void)onTimer;

@end

@interface _TtC16WordsBubbleState15WaitBubbleEvent : _TtC16WordsBubbleState20BubbleAnimationEvent
{
    // Error parsing type: , name: timer
    // Error parsing type: , name: delay
}

- (void).cxx_destruct;
- (id)init;

@end

@interface _TtC16WordsBubbleState20BubbleAnimationEvent : NSObject
{
    // Error parsing type: , name: requiredInitialBubbleState
    // Error parsing type: , name: requiredFinalBubbleState
    // Error parsing type: , name: onStateChange
    // Error parsing type: , name: onCompletion
    // Error parsing type: , name: cancelled
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;

@end

@interface _TtC16WordsBubbleState18BubbleStateManager : NSObject
{
    // Error parsing type: , name: oversizedBubble
    // Error parsing type: , name: locked
    // Error parsing type: , name: eventQueue
    // Error parsing type: , name: currentBubbleEvent
    // Error parsing type: , name: delegate
    // Error parsing type: , name: layoutConfiguration
    // Error parsing type: , name: drainingQueue
    // Error parsing type: , name: currentState
}

- (void).cxx_destruct;
- (id)init;

@end

