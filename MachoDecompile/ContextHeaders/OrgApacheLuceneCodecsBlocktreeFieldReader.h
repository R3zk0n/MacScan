// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREEFIELDREADER_H
#define ORGAPACHELUCENECODECSBLOCKTREEFIELDREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexTerms.h"
#import "OrgApacheLuceneIndexFieldInfo.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneCodecsBlocktreeBlockTreeTermsReader.h"
#import "OrgApacheLuceneUtilFstFST.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneCodecsBlocktreeFieldReader : OrgApacheLuceneIndexTerms <OrgApacheLuceneUtilAccountable>

 {
    NSInteger numTerms_;
    OrgApacheLuceneIndexFieldInfo *fieldInfo_;
    NSInteger sumTotalTermFreq_;
    NSInteger sumDocFreq_;
    int docCount_;
    NSInteger indexStartFP_;
    NSInteger rootBlockFP_;
    OrgApacheLuceneUtilBytesRef *rootCode_;
    OrgApacheLuceneUtilBytesRef *minTerm_;
    OrgApacheLuceneUtilBytesRef *maxTerm_;
    int longsSize_;
    OrgApacheLuceneCodecsBlocktreeBlockTreeTermsReader *parent_;
    OrgApacheLuceneUtilFstFST *index_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneCodecsBlocktreeBlockTreeTermsReader:(id)arg0 withOrgApacheLuceneIndexFieldInfo:(id)arg1 withLong:(NSInteger)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 withLong:(NSInteger)arg4 withLong:(NSInteger)arg5 withInt:(int)arg6 withLong:(NSInteger)arg7 withInt:(int)arg8 withOrgApacheLuceneStoreIndexInput:(id)arg9 withOrgApacheLuceneUtilBytesRef:(id)arg10 withOrgApacheLuceneUtilBytesRef:(id)arg11 ;
-(id)getMin;
-(id)getMax;
-(id)getStats;
-(BOOL)hasFreqs;
-(BOOL)hasOffsets;
-(BOOL)hasPositions;
-(BOOL)hasPayloads;
-(id)iterator;
-(NSInteger)size;
-(NSInteger)getSumTotalTermFreq;
-(NSInteger)getSumDocFreq;
-(int)getDocCount;
-(id)intersectWithOrgApacheLuceneUtilAutomatonCompiledAutomaton:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
-(void)__javaClone;
+(void)initialize;


@end


#endif