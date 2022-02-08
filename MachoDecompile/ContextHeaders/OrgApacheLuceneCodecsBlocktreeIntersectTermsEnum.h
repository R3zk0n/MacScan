// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREEINTERSECTTERMSENUM_H
#define ORGAPACHELUCENECODECSBLOCKTREEINTERSECTTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAutomatonRunAutomaton.h"
#import "OrgApacheLuceneUtilAutomatonAutomaton.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneCodecsBlocktreeFieldReader.h"
#import "OrgApacheLuceneCodecsBlocktreeIntersectTermsEnumFrame.h"
#import "OrgApacheLuceneUtilAutomatonTransition.h"
#import "OrgApacheLuceneUtilFstFST_BytesReader.h"

@interface OrgApacheLuceneCodecsBlocktreeIntersectTermsEnum : OrgApacheLuceneIndexTermsEnum {
    OrgApacheLuceneStoreIndexInput *in_;
    IOSObjectArray *stack_;
    OrgApacheLuceneUtilAutomatonRunAutomaton *runAutomaton_;
    OrgApacheLuceneUtilAutomatonAutomaton *automaton_;
    OrgApacheLuceneUtilBytesRef *commonSuffix_;
    OrgApacheLuceneCodecsBlocktreeFieldReader *fr_;
    IOSObjectArray *arcs_;
    OrgApacheLuceneCodecsBlocktreeIntersectTermsEnumFrame *currentFrame_;
    OrgApacheLuceneUtilAutomatonTransition *currentTransition_;
    OrgApacheLuceneUtilBytesRef *term_;
    OrgApacheLuceneUtilFstFST_BytesReader *fstReader_;
    BOOL allowAutoPrefixTerms_;
    int sinkState_;
    OrgApacheLuceneUtilBytesRef *savedStartTerm_;
    BOOL useAutoPrefixTerm_;
    OrgApacheLuceneUtilAutomatonTransition *scratchTransition_;
}




-(id)initWithOrgApacheLuceneCodecsBlocktreeFieldReader:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 withOrgApacheLuceneUtilAutomatonRunAutomaton:(id)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 withOrgApacheLuceneUtilBytesRef:(id)arg4 withInt:(int)arg5 ;
-(BOOL)setSavedStartTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)termState;
-(id)getFrameWithInt:(int)arg0 ;
-(id)getArcWithInt:(int)arg0 ;
-(id)pushFrameWithInt:(int)arg0 ;
-(id)term;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(int)getState;
-(void)seekToStartTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(BOOL)popPushNext;
-(BOOL)skipPastLastAutoPrefixTerm;
-(id)next;
-(id)_next;
-(BOOL)acceptsSuffixRangeWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)copyTerm;
-(BOOL)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(NSInteger)ord;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)dealloc;
+(id)brToStringWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(void)initialize;


@end


#endif