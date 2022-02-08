// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIPOSTINGSENUM_H
#define ORGAPACHELUCENEINDEXMULTIPOSTINGSENUM_H



#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexMultiTermsEnum.h"

@interface OrgApacheLuceneIndexMultiPostingsEnum : OrgApacheLuceneIndexPostingsEnum {
    IOSObjectArray *subPostingsEnums_;
    int numSubs_;
    int upto_;
    OrgApacheLuceneIndexPostingsEnum *current_;
    int currentBase_;
    int doc_;
    OrgApacheLuceneIndexMultiTermsEnum *parent_;
    IOSObjectArray *subs_;
}




-(id)initWithOrgApacheLuceneIndexMultiTermsEnum:(id)arg0 withInt:(int)arg1 ;
-(BOOL)canReuseWithOrgApacheLuceneIndexMultiTermsEnum:(id)arg0 ;
-(id)resetWithOrgApacheLuceneIndexMultiPostingsEnum_EnumWithSliceArray:(id)arg0 withInt:(int)arg1 ;
-(int)getNumSubs;
-(id)getSubs;
-(int)freq;
-(int)docID;
-(int)advanceWithInt:(int)arg0 ;
-(int)nextDoc;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(NSInteger)cost;
-(id)description;
-(void)dealloc;


@end


#endif