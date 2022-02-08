// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIFIELDS_H
#define ORGAPACHELUCENEINDEXMULTIFIELDS_H



#import "OrgApacheLuceneIndexFields.h"
#import "IOSObjectArray.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexMultiFields : OrgApacheLuceneIndexFields {
    IOSObjectArray *subs_;
    IOSObjectArray *subSlices_;
    id<JavaUtilMap> *terms_;
}




-(id)initWithOrgApacheLuceneIndexFieldsArray:(id)arg0 withOrgApacheLuceneIndexReaderSliceArray:(id)arg1 ;
-(id)iterator;
-(id)termsWithNSString:(id)arg0 ;
-(int)size;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(id)getFieldsWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
+(id)getLiveDocsWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
+(id)getTermsWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getTermDocsEnumWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneUtilBytesRef:(id)arg2 ;
+(id)getTermDocsEnumWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneUtilBytesRef:(id)arg2 withInt:(int)arg3 ;
+(id)getTermPositionsEnumWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneUtilBytesRef:(id)arg2 ;
+(id)getTermPositionsEnumWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneUtilBytesRef:(id)arg2 withInt:(int)arg3 ;
+(id)getMergedFieldInfosWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
+(id)getIndexedFieldsWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;


@end


#endif