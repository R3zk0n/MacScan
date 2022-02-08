// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_SYNCHRONIZEDMAP_H
#define JAVAUTILCOLLECTIONS_SYNCHRONIZEDMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface JavaUtilCollections_SynchronizedMap : NSObject <JavaUtilMap, JavaIoSerializable>

 {
    id *mutex_;
    id<JavaUtilMap> *m_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilMap:(id)arg0 ;
-(id)initWithJavaUtilMap:(id)arg0 withId:(id)arg1 ;
-(void)clear;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)entrySet;
-(BOOL)isEqual:(id)arg0 ;
-(id)getWithId:(id)arg0 ;
-(BOOL)isEmpty;
-(id)keySet;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(id)removeWithId:(id)arg0 ;
-(int)size;
-(id)values;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif