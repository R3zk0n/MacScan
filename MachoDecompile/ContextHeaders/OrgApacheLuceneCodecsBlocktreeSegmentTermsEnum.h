// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREESEGMENTTERMSENUM_H
#define ORGAPACHELUCENECODECSBLOCKTREESEGMENTTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneCodecsBlocktreeSegmentTermsEnumFrame.h"
#import "OrgApacheLuceneCodecsBlocktreeFieldReader.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneStoreByteArrayDataInput.h"
#import "OrgApacheLuceneUtilFstFST_BytesReader.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneCodecsBlocktreeSegmentTermsEnum : OrgApacheLuceneIndexTermsEnum <AutoreleaseLiteSupport>

 {
    OrgApacheLuceneStoreIndexInput *in_;
    OrgApacheLuceneCodecsBlocktreeSegmentTermsEnumFrame *currentFrame_;
    BOOL termExists_;
    OrgApacheLuceneCodecsBlocktreeFieldReader *fr_;
    OrgApacheLuceneUtilBytesRefBuilder *term_;
    uint8_t _autoreleaseLiteLastPoolId;
    IOSObjectArray *stack_;
    OrgApacheLuceneCodecsBlocktreeSegmentTermsEnumFrame *staticFrame_;
    int targetBeforeCurrentLength_;
    OrgApacheLuceneStoreByteArrayDataInput *scratchReader_;
    int validIndexPrefix_;
    BOOL eof_;
    OrgApacheLuceneUtilFstFST_BytesReader *fstReader_;
    IOSObjectArray *arcs_;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneCodecsBlocktreeFieldReader:(id)arg0 ;
-(void)initIndexInput;
-(id)computeBlockStats;
-(id)getFrameWithInt:(int)arg0 ;
-(id)getArcWithInt:(int)arg0 ;
-(id)pushFrameWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 withInt:(int)arg2 ;
-(id)pushFrameWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(BOOL)clearEOF;
-(BOOL)setEOF;
-(BOOL)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)printSeekStateWithJavaIoPrintStream:(id)arg0 ;
-(id)next;
-(id)term;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 ;
-(id)termState;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(NSInteger)ord;
-(void)dealloc;
+(void)initialize;


@end


#endif