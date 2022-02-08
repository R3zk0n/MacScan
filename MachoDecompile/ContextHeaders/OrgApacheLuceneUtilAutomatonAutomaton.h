// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONAUTOMATON_H
#define ORGAPACHELUCENEUTILAUTOMATONAUTOMATON_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "JavaUtilBitSet.h"
#import "OrgApacheLuceneUtilSorter.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilAutomatonAutomaton : NSObject <OrgApacheLuceneUtilAccountable>

 {
    int nextState_;
    int nextTransition_;
    int curState_;
    IOSIntArray *states_;
    JavaUtilBitSet *isAccept_;
    IOSIntArray *transitions_;
    BOOL deterministic_;
    OrgApacheLuceneUtilSorter *destMinMaxSorter_;
    OrgApacheLuceneUtilSorter *minMaxDestSorter_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)createState;
-(void)setAcceptWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(id)getSortedTransitions;
-(id)getAcceptStates;
-(BOOL)isAcceptWithInt:(int)arg0 ;
-(void)addTransitionWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)addTransitionWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)addEpsilonWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)copy__WithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
-(void)finishCurrentState;
-(BOOL)isDeterministic;
-(void)finishState;
-(int)getNumStates;
-(int)getNumTransitions;
-(int)getNumTransitionsWithInt:(int)arg0 ;
-(void)growStates;
-(void)growTransitions;
-(int)initTransitionWithInt:(int)arg0 withOrgApacheLuceneUtilAutomatonTransition:(id)arg1 ;
-(void)getNextTransitionWithOrgApacheLuceneUtilAutomatonTransition:(id)arg0 ;
-(BOOL)transitionSortedWithOrgApacheLuceneUtilAutomatonTransition:(id)arg0 ;
-(void)getTransitionWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilAutomatonTransition:(id)arg2 ;
-(id)toDot;
-(id)getStartPoints;
-(int)stepWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
+(void)appendCharStringWithInt:(int)arg0 withJavaLangStringBuilder:(id)arg1 ;


@end


#endif