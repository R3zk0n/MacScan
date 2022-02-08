// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEDOCUMENTFIELD_H
#define ORGAPACHELUCENEDOCUMENTFIELD_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneDocumentFieldType.h"
#import "OrgApacheLuceneAnalysisTokenStream.h"
#import "OrgApacheLuceneIndexIndexableField-Protocol.h"

@interface OrgApacheLuceneDocumentField : NSObject <OrgApacheLuceneIndexIndexableField>

 {
    OrgApacheLuceneDocumentFieldType *type_;
    NSString *name_;
    id *fieldsData_;
    OrgApacheLuceneAnalysisTokenStream *tokenStream_;
    float boost_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withOrgApacheLuceneDocumentFieldType:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withJavaIoReader:(id)arg1 withOrgApacheLuceneDocumentFieldType:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneAnalysisTokenStream:(id)arg1 withOrgApacheLuceneDocumentFieldType:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withByteArray:(id)arg1 withOrgApacheLuceneDocumentFieldType:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withOrgApacheLuceneDocumentFieldType:(id)arg4 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 withOrgApacheLuceneDocumentFieldType:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneDocumentFieldType:(id)arg2 ;
-(id)stringValue;
-(id)readerValue;
-(id)tokenStreamValue;
-(void)setStringValueWithNSString:(id)arg0 ;
-(void)setReaderValueWithJavaIoReader:(id)arg0 ;
-(void)setBytesValueWithByteArray:(id)arg0 ;
-(void)setBytesValueWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)setByteValueWithByte:(char)arg0 ;
-(void)setShortValueWithShort:(short)arg0 ;
-(void)setIntValueWithInt:(int)arg0 ;
-(void)setLongValueWithLong:(NSInteger)arg0 ;
-(void)setFloatValueWithFloat:(float)arg0 ;
-(void)setDoubleValueWithDouble:(CGFloat)arg0 ;
-(void)setTokenStreamWithOrgApacheLuceneAnalysisTokenStream:(id)arg0 ;
-(id)name;
-(float)boost;
-(void)setBoostWithFloat:(float)arg0 ;
-(id)numericValue;
-(id)binaryValue;
-(id)fieldType;
-(id)tokenStreamWithOrgApacheLuceneAnalysisAnalyzer:(id)arg0 withOrgApacheLuceneAnalysisTokenStream:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneDocumentField_StoreEnum:(id)arg2 withOrgApacheLuceneDocumentField_IndexEnum:(id)arg3 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneDocumentField_StoreEnum:(id)arg2 withOrgApacheLuceneDocumentField_IndexEnum:(id)arg3 withOrgApacheLuceneDocumentField_TermVectorEnum:(id)arg4 ;
-(id)initWithNSString:(id)arg0 withJavaIoReader:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withJavaIoReader:(id)arg1 withOrgApacheLuceneDocumentField_TermVectorEnum:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneAnalysisTokenStream:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneAnalysisTokenStream:(id)arg1 withOrgApacheLuceneDocumentField_TermVectorEnum:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withByteArray:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;
+(id)translateFieldTypeWithOrgApacheLuceneDocumentField_StoreEnum:(id)arg0 withOrgApacheLuceneDocumentField_IndexEnum:(id)arg1 withOrgApacheLuceneDocumentField_TermVectorEnum:(id)arg2 ;


@end


#endif