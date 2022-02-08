// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISNUMERICTOKENSTREAM_NUMERICTERMATTRIBUTEIMPL_H
#define ORGAPACHELUCENEANALYSISNUMERICTOKENSTREAM_NUMERICTERMATTRIBUTEIMPL_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAttributeImpl.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"
#import "OrgApacheLuceneAnalysisNumericTokenStream_NumericTermAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesTermToBytesRefAttribute-Protocol.h"

@interface OrgApacheLuceneAnalysisNumericTokenStream_NumericTermAttributeImpl : OrgApacheLuceneUtilAttributeImpl <OrgApacheLuceneAnalysisNumericTokenStream_NumericTermAttribute, OrgApacheLuceneAnalysisTokenattributesTermToBytesRefAttribute>

 {
    NSInteger value_;
    int valueSize_;
    int shift_;
    int precisionStep_;
    OrgApacheLuceneUtilBytesRefBuilder *bytes_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)getBytesRef;
-(int)getShift;
-(void)setShiftWithInt:(int)arg0 ;
-(int)incShift;
-(NSInteger)getRawValue;
-(int)getValueSize;
-(void)init__WithLong:(NSInteger)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)clear;
-(void)reflectWithWithOrgApacheLuceneUtilAttributeReflector:(id)arg0 ;
-(void)copyToWithOrgApacheLuceneUtilAttributeImpl:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif