// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_TERMANDSTATE_H
#define ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_TERMANDSTATE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneIndexTermState.h"

@interface OrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper_TermAndState : NSObject {
    OrgApacheLuceneUtilBytesRef *term_;
    OrgApacheLuceneIndexTermState *state_;
    int docFreq_;
    NSInteger totalTermFreq_;
}




-(id)initWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif