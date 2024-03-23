//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark -

//
// File: Payload/HQ-iOS.app/Frameworks/HQAddressBook.framework/HQAddressBook
// UUID: A0F68C1F-D860-3CB4-B1B3-800BEB60801D
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
//                               = Payload/HQ-iOS.app/Frameworks/HQAddressBook.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQAddressBook.framework/Frameworks
//                       Run path: @executable_path/../../Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQAddressBook.framework/../../Frameworks
//                       Run path: @executable_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQAddressBook.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = Payload/HQ-iOS.app/Frameworks/HQAddressBook.framework/Frameworks
//

@protocol CNKeyDescriptor <NSObject, NSSecureCoding, NSCopying>
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

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

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@interface _TtC13HQAddressBook23AddressBookContactStore : _TtCs12_SwiftObject
{
    // Error parsing type: , name: addressBookContacts
    // Error parsing type: , name: backingContactStore
    // Error parsing type: , name: uploader
    // Error parsing type: , name: queue
    // Error parsing type: , name: imageQueue
}

@end

@interface _TtC13HQAddressBook15ContactUploader : _TtCs12_SwiftObject
{
    // Error parsing type: , name: completionQueue
    // Error parsing type: , name: $__lazy_storage_$_operationQueue
}

@end

__attribute__((visibility("hidden")))
@interface _TtC13HQAddressBook21SendContactsOperation : NSOperation
{
    // Error parsing type: , name: error
    // Error parsing type: , name: resourceLoader
    // Error parsing type: , name: batchSize
    // Error parsing type: , name: addressBookContacts
    // Error parsing type: , name: state
}

- (void).cxx_destruct;
- (id)init;
- (void)start;
- (_Bool)isAsynchronous;
- (_Bool)isFinished;
- (_Bool)isExecuting;

// Remaining properties
@property(nonatomic, readonly) _Bool asynchronous;
@property(nonatomic, readonly) _Bool executing;
@property(nonatomic, readonly) _Bool finished;

@end
