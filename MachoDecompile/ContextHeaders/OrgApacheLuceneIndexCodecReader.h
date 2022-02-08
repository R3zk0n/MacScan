// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXCODECREADER_H
#define ORGAPACHELUCENEINDEXCODECREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexLeafReader.h"
#import "OrgApacheLuceneUtilCloseableThreadLocal.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneIndexCodecReader : OrgApacheLuceneIndexLeafReader <OrgApacheLuceneUtilAccountable>

 {
    OrgApacheLuceneUtilCloseableThreadLocal *docValuesLocal_;
    OrgApacheLuceneUtilCloseableThreadLocal *docsWithFieldLocal_;
    OrgApacheLuceneUtilCloseableThreadLocal *normsLocal_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)documentWithInt:(int)arg0 withOrgApacheLuceneIndexStoredFieldVisitor:(id)arg1 ;
-(id)getTermVectorsWithInt:(int)arg0 ;
-(void)checkBoundsWithInt:(int)arg0 ;
-(id)fields;
-(id)getDVFieldWithNSString:(id)arg0 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg1 ;
-(id)getNumericDocValuesWithNSString:(id)arg0 ;
-(id)getDocsWithFieldWithNSString:(id)arg0 ;
-(id)getBinaryDocValuesWithNSString:(id)arg0 ;
-(id)getSortedDocValuesWithNSString:(id)arg0 ;
-(id)getSortedNumericDocValuesWithNSString:(id)arg0 ;
-(id)getSortedSetDocValuesWithNSString:(id)arg0 ;
-(id)getNormValuesWithNSString:(id)arg0 ;
-(void)doClose;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(void)dealloc;


@end


#endif