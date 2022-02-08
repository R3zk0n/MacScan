// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_FORMATENUM_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_FORMATENUM_H



#import "JavaLangEnum.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneUtilPackedPackedInts_FormatEnum : JavaLangEnum <NSCopying>

 {
    int id__;
}




-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(int)getId;
-(NSInteger)byteCountWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)longCountWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isSupportedWithInt:(int)arg0 ;
-(float)overheadPerValueWithInt:(int)arg0 ;
-(float)overheadRatioWithInt:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)byIdWithInt:(int)arg0 ;
+(id)values;
+(id)valueOfWithNSString:(id)arg0 ;
+(void)initialize;


@end


#endif