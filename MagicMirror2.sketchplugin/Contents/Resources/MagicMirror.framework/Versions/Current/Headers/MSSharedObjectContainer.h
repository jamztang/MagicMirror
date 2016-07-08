//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSharedObjectContainer.h"

@interface MSSharedObjectContainer : _MSSharedObjectContainer
{
    id <MSSharedObjectContainerDelegate> _delegate;
}


- (id)addSharedObjectWithName:(id)arg1 firstInstance:(struct MSModelObject *)arg2;
@property(retain, nonatomic) id <MSSharedObjectContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enumeratePotentialInstancesInContainer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)indexOfSharedObject:(id)arg1;
- (id)instancesOf:(id)arg1 inContainer:(id)arg2;
- (BOOL)isSharedObjectForInstance:(struct MSModelObject *)arg1;
- (id)layersToIterateOver;
- (void)linkInstances:(id)arg1 fromSharedObject:(id)arg2;
- (id)mergeSharedObjectWithName:(id)arg1 sharedObjectID:(id)arg2 instance:(struct MSModelObject *)arg3;
- (void)mergeSharedObjects:(id)arg1;
- (unsigned long long)numberOfSharedObjects;
- (id)objectsSortedByName;
- (void)registerInstance:(struct MSModelObject *)arg1 withSharedObject:(id)arg2;
- (void)registerUndoForLinkingInstances:(id)arg1 toSharedObject:(id)arg2;
- (void)registerUndoForUnlinkingInstances:(id)arg1 fromSharedObject:(id)arg2;
- (id)relinkSharedObjectInstance:(struct MSModelObject *)arg1;
- (void)relinkSharedObjectsInArray:(id)arg1;
- (void)removeSharedObject:(id)arg1;
- (id)sharedObjectAtIndex:(unsigned long long)arg1;
- (Class)sharedObjectClass;
- (id)sharedObjectForInstance:(struct MSModelObject *)arg1;
- (id)sharedObjectWithID:(id)arg1;
- (id)sharedObjectsInLayer:(id)arg1;
- (id)sharedObjectsInLayers:(id)arg1;
- (void)syncInstance:(struct MSModelObject *)arg1 withTemplateInstance:(struct MSModelObject *)arg2;
- (BOOL)syncSharedObjectWithInstance:(struct MSModelObject *)arg1;
- (void)synchroniseInstancesOfSharedObject:(id)arg1 withInstance:(struct MSModelObject *)arg2;
- (void)unlinkInstances:(id)arg1 toSharedObject:(id)arg2;
- (void)unregisterInstance:(struct MSModelObject *)arg1;
- (void)updateIDOfSharedObject:(id)arg1 andRenameTo:(id)arg2;
- (BOOL)updateInstancesOfSharedObject:(id)arg1 withValue:(struct MSModelObject *)arg2;
- (void)updateValueOfSharedObject:(id)arg1 byCopyingInstance:(struct MSModelObject *)arg2;

@end
