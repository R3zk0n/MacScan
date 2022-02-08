// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDCOLLECTION_H
#define JAVAUTILCOLLECTIONS_CHECKEDCOLLECTION_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaUtilCollection-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface JavaUtilCollections_CheckedCollection : NSObject <JavaUtilCollection, JavaIoSerializable>

 {
    id<JavaUtilCollection> *c_;
    IOSClass *type_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilCollection:(id)arg0 withIOSClass:(id)arg1 ;
-(int)size;
-(BOOL)isEmpty;
-(BOOL)containsWithId:(id)arg0 ;
-(id)iterator;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(void)clear;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif