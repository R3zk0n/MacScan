// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_NODE_H
#define JAVAUTILTREEMAP_NODE_H


#import <Foundation/Foundation.h>

#import "JavaUtilTreeMap_Node.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilTreeMap_Node : NSObject <JavaUtilMap_Entry>

 {
    JavaUtilTreeMap_Node *parent_;
    JavaUtilTreeMap_Node *left_;
    JavaUtilTreeMap_Node *right_;
    id *key_;
    id *value_;
    int height_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilTreeMap_Node:(id)arg0 withId:(id)arg1 ;
-(id)copy__WithJavaUtilTreeMap_Node:(id)arg0 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)next;
-(id)prev;
-(id)first;
-(id)last;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif