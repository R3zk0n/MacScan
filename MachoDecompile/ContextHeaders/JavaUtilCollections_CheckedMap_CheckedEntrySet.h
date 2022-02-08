// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_H
#define JAVAUTILCOLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface JavaUtilCollections_CheckedMap_CheckedEntrySet : NSObject <JavaUtilSet>

 {
    id<JavaUtilSet> *s_;
    IOSClass *valueType_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilSet:(id)arg0 withIOSClass:(id)arg1 ;
-(id)iterator;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)isEmpty;
-(void)clear;
-(int)size;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif