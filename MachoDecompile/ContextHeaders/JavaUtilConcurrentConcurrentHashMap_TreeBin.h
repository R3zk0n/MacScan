// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_TREEBIN_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_TREEBIN_H

@class Node;


#import "JavaUtilConcurrentConcurrentHashMap_TreeNode.h"

@interface JavaUtilConcurrentConcurrentHashMap_TreeBin : Node {
    JavaUtilConcurrentConcurrentHashMap_TreeNode *root_;
    uint8_t first_;
    uint8_t waiter_;
    uint8_t lockState_;
}




-(id)initWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 ;
-(void)lockRoot;
-(void)unlockRoot;
-(void)contendedLock;
-(id)findWithInt:(int)arg0 withId:(id)arg1 ;
-(id)putTreeValWithInt:(int)arg0 withId:(id)arg1 withId:(id)arg2 ;
-(BOOL)removeTreeNodeWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(int)tieBreakOrderWithId:(id)arg0 withId:(id)arg1 ;
+(id)rotateLeftWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 ;
+(id)rotateRightWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 ;
+(id)balanceInsertionWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 ;
+(id)balanceDeletionWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 ;
+(BOOL)checkInvariantsWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif