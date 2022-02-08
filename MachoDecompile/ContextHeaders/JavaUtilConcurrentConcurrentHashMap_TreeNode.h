// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_TREENODE_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_TREENODE_H

@class Node;


#import "JavaUtilConcurrentConcurrentHashMap_TreeNode.h"

@interface JavaUtilConcurrentConcurrentHashMap_TreeNode : Node {
    JavaUtilConcurrentConcurrentHashMap_TreeNode *parent_;
    JavaUtilConcurrentConcurrentHashMap_TreeNode *left_;
    JavaUtilConcurrentConcurrentHashMap_TreeNode *right_;
    JavaUtilConcurrentConcurrentHashMap_TreeNode *prev_;
    BOOL red_;
}




-(id)initWithInt:(int)arg0 withId:(id)arg1 withId:(id)arg2 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg3 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg4 ;
-(id)findWithInt:(int)arg0 withId:(id)arg1 ;
-(id)findTreeNodeWithInt:(int)arg0 withId:(id)arg1 withIOSClass:(id)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif