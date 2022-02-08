// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISTOKENATTRIBUTESCHARTERMATTRIBUTEIMPL_H
#define ORGAPACHELUCENEANALYSISTOKENATTRIBUTESCHARTERMATTRIBUTEIMPL_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAttributeImpl.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"
#import "IOSCharArray.h"
#import "OrgApacheLuceneAnalysisTokenattributesCharTermAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesTermToBytesRefAttribute-Protocol.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneAnalysisTokenattributesCharTermAttributeImpl : OrgApacheLuceneUtilAttributeImpl <OrgApacheLuceneAnalysisTokenattributesCharTermAttribute, OrgApacheLuceneAnalysisTokenattributesTermToBytesRefAttribute, NSCopying>

 {
    OrgApacheLuceneUtilBytesRefBuilder *builder_;
    IOSCharArray *termBuffer_;
    int termLength_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)copyBufferWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)buffer;
-(id)resizeBufferWithInt:(int)arg0 ;
-(void)growTermBufferWithInt:(int)arg0 ;
-(id)setLengthWithInt:(int)arg0 ;
-(id)setEmpty;
-(id)getBytesRef;
-(int)length;
-(unsigned short)charAtWithInt:(int)arg0 ;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithNSString:(id)arg0 ;
-(id)appendWithJavaLangStringBuilder:(id)arg0 ;
-(id)appendWithOrgApacheLuceneAnalysisTokenattributesCharTermAttribute:(id)arg0 ;
-(id)appendNull;
-(void)clear;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(void)reflectWithWithOrgApacheLuceneUtilAttributeReflector:(id)arg0 ;
-(void)copyToWithOrgApacheLuceneUtilAttributeImpl:(id)arg0 ;
-(void)dealloc;


@end


#endif