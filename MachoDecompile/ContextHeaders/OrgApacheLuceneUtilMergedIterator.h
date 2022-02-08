// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILMERGEDITERATOR_H
#define ORGAPACHELUCENEUTILMERGEDITERATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilMergedIterator_TermMergeQueue.h"
#import "IOSObjectArray.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneUtilMergedIterator : NSObject <JavaUtilIterator>

 {
    id<JavaLangComparable> *current_;
    OrgApacheLuceneUtilMergedIterator_TermMergeQueue *queue_;
    IOSObjectArray *top_;
    BOOL removeDuplicates_;
    int numTop_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilIteratorArray:(id)arg0 ;
-(id)initWithBoolean:(BOOL)arg0 withJavaUtilIteratorArray:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(void)pullTop;
-(void)pushTop;
-(void)dealloc;


@end


#endif