// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_MAPENTRY_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_MAPENTRY_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentConcurrentHashMap.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap_MapEntry : NSObject <JavaUtilMap_Entry>

 {
    id *key_;
    id *val_;
    JavaUtilConcurrentConcurrentHashMap *map_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 withId:(id)arg1 withJavaUtilConcurrentConcurrentHashMap:(id)arg2 ;
-(id)getKey;
-(id)getValue;
-(BOOL)isEqual:(id)arg0 ;
-(id)setValueWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif