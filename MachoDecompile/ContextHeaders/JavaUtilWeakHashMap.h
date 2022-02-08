// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILWEAKHASHMAP_H
#define JAVAUTILWEAKHASHMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "IOSObjectArray.h"
#import "JavaLangRefReferenceQueue.h"
#import "AutoreleaseLiteSupport-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface JavaUtilWeakHashMap : JavaUtilAbstractMap <AutoreleaseLiteSupport, JavaUtilMap>

 {
    int elementCount_;
    IOSObjectArray *elementData_;
    uint8_t modCount_;
    uint8_t _autoreleaseLiteLastPoolId;
    JavaLangRefReferenceQueue *referenceQueue_;
    int loadFactor_;
    int threshold_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)autorelease;
-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(void)clear;
-(void)computeMaxSize;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(id)entrySet;
-(id)keySet;
-(id)values;
-(id)getWithId:(id)arg0 ;
-(id)getEntryWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(BOOL)isEmpty;
-(void)poll;
-(void)removeEntryWithJavaUtilWeakHashMap_Entry:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(id)removeWithId:(id)arg0 ;
-(int)size;
-(void)putAllImplWithJavaUtilMap:(id)arg0 ;
-(void)dealloc;
+(id)newEntryArrayWithInt:(int)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif