// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSSTOREDFIELDSWRITER_MERGEVISITOR_H
#define ORGAPACHELUCENECODECSSTOREDFIELDSWRITER_MERGEVISITOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexStoredFieldVisitor.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneIndexFieldInfo.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneCodecsStoredFieldsWriter.h"
#import "OrgApacheLuceneIndexIndexableField-Protocol.h"

@interface OrgApacheLuceneCodecsStoredFieldsWriter_MergeVisitor : OrgApacheLuceneIndexStoredFieldVisitor <OrgApacheLuceneIndexIndexableField>

 {
    OrgApacheLuceneUtilBytesRef *binaryValue_;
    NSString *stringValue_;
    NSNumber *numericValue_;
    OrgApacheLuceneIndexFieldInfo *currentField_;
    OrgApacheLuceneIndexFieldInfos *remapper_;
    OrgApacheLuceneCodecsStoredFieldsWriter *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneCodecsStoredFieldsWriter:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withInt:(int)arg2 ;
-(void)binaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withByteArray:(id)arg1 ;
-(void)stringFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withByteArray:(id)arg1 ;
-(void)intFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withInt:(int)arg1 ;
-(void)longFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)floatFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withFloat:(float)arg1 ;
-(void)doubleFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withDouble:(CGFloat)arg1 ;
-(id)needsFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)name;
-(id)fieldType;
-(id)binaryValue;
-(id)stringValue;
-(id)numericValue;
-(id)readerValue;
-(float)boost;
-(id)tokenStreamWithOrgApacheLuceneAnalysisAnalyzer:(id)arg0 withOrgApacheLuceneAnalysisTokenStream:(id)arg1 ;
-(void)resetWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(void)write;
-(void)dealloc;


@end


#endif