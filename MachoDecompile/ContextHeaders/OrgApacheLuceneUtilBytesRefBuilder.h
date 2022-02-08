// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBYTESREFBUILDER_H
#define ORGAPACHELUCENEUTILBYTESREFBUILDER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneUtilBytesRefBuilder : NSObject {
    OrgApacheLuceneUtilBytesRef *ref_;
}




-(id)init;
-(id)bytes;
-(int)length;
-(void)setLengthWithInt:(int)arg0 ;
-(char)byteAtWithInt:(int)arg0 ;
-(void)setByteAtWithInt:(int)arg0 withByte:(char)arg1 ;
-(void)growWithInt:(int)arg0 ;
-(void)appendWithByte:(char)arg0 ;
-(void)appendWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)appendWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)appendWithOrgApacheLuceneUtilBytesRefBuilder:(id)arg0 ;
-(void)clear;
-(void)copyBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)copyBytesWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)copyBytesWithOrgApacheLuceneUtilBytesRefBuilder:(id)arg0 ;
-(void)copyCharsWithJavaLangCharSequence:(id)arg0 ;
-(void)copyCharsWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)copyCharsWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)get;
-(id)toBytesRef;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif