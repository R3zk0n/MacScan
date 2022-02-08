// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$8_$1_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$8_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsDocValuesConsumer_$8.h"
#import "JavaUtilIterator-Protocol.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer_$8_$1 : NSObject <JavaUtilIterator>

 {
    OrgApacheLuceneCodecsDocValuesConsumer_$8 *this$0_;
    int readerUpto_;
    int docIDUpto_;
    int nextValue_;
    int currentMaxDoc_;
    id<OrgApacheLuceneUtilBits> *currentLiveDocs_;
    BOOL nextIsSet_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(void)remove;
-(id)next;
-(BOOL)setNext;
-(id)initWithOrgApacheLuceneCodecsDocValuesConsumer_$8:(id)arg0 ;
-(void)dealloc;


@end


#endif