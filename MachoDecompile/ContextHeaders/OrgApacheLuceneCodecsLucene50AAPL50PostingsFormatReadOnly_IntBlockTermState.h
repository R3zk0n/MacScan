// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSFORMATREADONLY_INTBLOCKTERMSTATE_H
#define ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSFORMATREADONLY_INTBLOCKTERMSTATE_H



#import "OrgApacheLuceneCodecsBlockTermState.h"

@interface OrgApacheLuceneCodecsLucene50AAPL50PostingsFormatReadOnly_IntBlockTermState : OrgApacheLuceneCodecsBlockTermState {
    NSInteger docStartFP_;
    NSInteger posStartFP_;
    NSInteger payStartFP_;
    NSInteger skipOffset_;
    NSInteger lastPosBlockOffset_;
    int singletonDocID_;
}




-(id)clone;
-(void)copyFromWithOrgApacheLuceneIndexTermState:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif