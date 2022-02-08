// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_NODE_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_NODE_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentConcurrentHashMap_Node.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap_Node : NSObject <JavaUtilMap_Entry>

 {
    int hash__;
    id *key_;
    uint8_t val_;
    JavaUtilConcurrentConcurrentHashMap_Node *next_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withId:(id)arg1 withId:(id)arg2 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg3 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)findWithInt:(int)arg0 withId:(id)arg1 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif