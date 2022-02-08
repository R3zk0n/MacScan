// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONAUTOMATON_BUILDER_H
#define ORGAPACHELUCENEUTILAUTOMATONAUTOMATON_BUILDER_H


#import <Foundation/Foundation.h>

#import "JavaUtilBitSet.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilSorter.h"

@interface OrgApacheLuceneUtilAutomatonAutomaton_Builder : NSObject {
    int nextState_;
    JavaUtilBitSet *isAccept_;
    IOSIntArray *transitions_;
    int nextTransition_;
    OrgApacheLuceneUtilSorter *sorter_;
}




-(id)init;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)addTransitionWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)addTransitionWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)addEpsilonWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)finish;
-(int)createState;
-(void)setAcceptWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)isAcceptWithInt:(int)arg0 ;
-(int)getNumStates;
-(void)copy__WithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
-(void)copyStatesWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
-(void)dealloc;


@end


#endif