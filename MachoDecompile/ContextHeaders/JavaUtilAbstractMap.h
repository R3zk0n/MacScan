// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTMAP_H
#define JAVAUTILABSTRACTMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface JavaUtilAbstractMap : NSObject <JavaUtilMap>

 {
    id<JavaUtilSet> *keySet_;
    id<JavaUtilCollection> *valuesCollection_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
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
-(id)clone;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif