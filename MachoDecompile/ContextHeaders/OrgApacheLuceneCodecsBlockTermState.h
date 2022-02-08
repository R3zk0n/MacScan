// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTERMSTATE_H
#define ORGAPACHELUCENECODECSBLOCKTERMSTATE_H



#import "OrgApacheLuceneIndexOrdTermState.h"

@interface OrgApacheLuceneCodecsBlockTermState : OrgApacheLuceneIndexOrdTermState {
    int docFreq_;
    NSInteger totalTermFreq_;
    int termBlockOrd_;
    NSInteger blockFilePointer_;
    BOOL isRealTerm_;
}




-(id)init;
-(void)copyFromWithOrgApacheLuceneIndexTermState:(id)arg0 ;
-(BOOL)isRealTerm;
-(id)description;


@end


#endif