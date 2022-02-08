// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEDOCUMENTFIELDTYPE_H
#define ORGAPACHELUCENEDOCUMENTFIELDTYPE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexIndexOptionsEnum.h"
#import "OrgApacheLuceneDocumentFieldType_NumericTypeEnum.h"
#import "OrgApacheLuceneIndexDocValuesTypeEnum.h"
#import "OrgApacheLuceneIndexIndexableFieldType-Protocol.h"

@interface OrgApacheLuceneDocumentFieldType : NSObject <OrgApacheLuceneIndexIndexableFieldType>

 {
    BOOL stored_;
    BOOL tokenized_;
    BOOL storeTermVectors_;
    BOOL storeTermVectorOffsets_;
    BOOL storeTermVectorPositions_;
    BOOL storeTermVectorPayloads_;
    BOOL omitNorms_;
    OrgApacheLuceneIndexIndexOptionsEnum *indexOptions_;
    OrgApacheLuceneDocumentFieldType_NumericTypeEnum *numericType_;
    BOOL frozen_;
    int numericPrecisionStep_;
    OrgApacheLuceneIndexDocValuesTypeEnum *docValuesType_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneDocumentFieldType:(id)arg0 ;
-(id)init;
-(void)checkIfFrozen;
-(void)freeze;
-(BOOL)stored;
-(void)setStoredWithBoolean:(BOOL)arg0 ;
-(BOOL)tokenized;
-(void)setTokenizedWithBoolean:(BOOL)arg0 ;
-(BOOL)storeTermVectors;
-(void)setStoreTermVectorsWithBoolean:(BOOL)arg0 ;
-(BOOL)storeTermVectorOffsets;
-(void)setStoreTermVectorOffsetsWithBoolean:(BOOL)arg0 ;
-(BOOL)storeTermVectorPositions;
-(void)setStoreTermVectorPositionsWithBoolean:(BOOL)arg0 ;
-(BOOL)storeTermVectorPayloads;
-(void)setStoreTermVectorPayloadsWithBoolean:(BOOL)arg0 ;
-(BOOL)omitNorms;
-(void)setOmitNormsWithBoolean:(BOOL)arg0 ;
-(id)indexOptions;
-(void)setIndexOptionsWithOrgApacheLuceneIndexIndexOptionsEnum:(id)arg0 ;
-(void)setNumericTypeWithOrgApacheLuceneDocumentFieldType_NumericTypeEnum:(id)arg0 ;
-(id)numericType;
-(void)setNumericPrecisionStepWithInt:(int)arg0 ;
-(int)numericPrecisionStep;
-(id)docValuesType;
-(void)setDocValuesTypeWithOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif