// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILUNICODEUTIL_H
#define ORGAPACHELUCENEUTILUNICODEUTIL_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilUnicodeUtil : NSObject



-(id)init;
+(int)UTF16toUTF8WithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withByteArray:(id)arg3 ;
+(int)UTF16toUTF8WithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withByteArray:(id)arg3 ;
+(int)UTF16toUTF8WithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withByteArray:(id)arg3 withInt:(int)arg4 ;
+(BOOL)validUTF16StringWithJavaLangCharSequence:(id)arg0 ;
+(BOOL)validUTF16StringWithCharArray:(id)arg0 withInt:(int)arg1 ;
+(int)codePointCountWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(int)UTF8toUTF32WithOrgApacheLuceneUtilBytesRef:(id)arg0 withIntArray:(id)arg1 ;
+(id)newStringWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)toHexStringWithNSString:(id)arg0 ;
+(int)UTF8toUTF16WithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withCharArray:(id)arg3 ;
+(int)UTF8toUTF16WithOrgApacheLuceneUtilBytesRef:(id)arg0 withCharArray:(id)arg1 ;
+(void)initialize;


@end


#endif