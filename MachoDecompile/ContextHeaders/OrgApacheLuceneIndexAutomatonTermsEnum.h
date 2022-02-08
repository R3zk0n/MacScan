// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXAUTOMATONTERMSENUM_H
#define ORGAPACHELUCENEINDEXAUTOMATONTERMSENUM_H



#import "OrgApacheLuceneIndexFilteredTermsEnum.h"
#import "OrgApacheLuceneUtilAutomatonByteRunAutomaton.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneUtilAutomatonAutomaton.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"
#import "OrgApacheLuceneUtilAutomatonTransition.h"
#import "OrgApacheLuceneUtilIntsRefBuilder.h"

@interface OrgApacheLuceneIndexAutomatonTermsEnum : OrgApacheLuceneIndexFilteredTermsEnum {
    OrgApacheLuceneUtilAutomatonByteRunAutomaton *runAutomaton_;
    OrgApacheLuceneUtilBytesRef *commonSuffixRef_;
    BOOL finite_;
    OrgApacheLuceneUtilAutomatonAutomaton *automaton_;
    IOSLongArray *visited_;
    NSInteger curGen_;
    OrgApacheLuceneUtilBytesRefBuilder *seekBytesRef_;
    BOOL linear_;
    OrgApacheLuceneUtilBytesRef *linearUpperBound_;
    OrgApacheLuceneUtilAutomatonTransition *transition_;
    OrgApacheLuceneUtilIntsRefBuilder *savedStates_;
}




-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 withOrgApacheLuceneUtilAutomatonCompiledAutomaton:(id)arg1 ;
-(id)acceptWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)nextSeekTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)setLinearWithInt:(int)arg0 ;
-(BOOL)nextString;
-(BOOL)nextStringWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)backtrackWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif