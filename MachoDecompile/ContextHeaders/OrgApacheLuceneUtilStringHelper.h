// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILSTRINGHELPER_H
#define ORGAPACHELUCENEUTILSTRINGHELPER_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilStringHelper : NSObject



-(id)init;
+(int)bytesDifferenceWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
+(int)sortKeyLengthWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
+(BOOL)equalsWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(BOOL)startsWithWithByteArray:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
+(BOOL)startsWithWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
+(BOOL)endsWithWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
+(int)murmurhash3_x86_32WithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)murmurhash3_x86_32WithOrgApacheLuceneUtilBytesRef:(id)arg0 withInt:(int)arg1 ;
+(id)randomId;
+(id)idToStringWithByteArray:(id)arg0 ;
+(id)intsRefToBytesRefWithOrgApacheLuceneUtilIntsRef:(id)arg0 ;
+(void)initialize;


@end


#endif