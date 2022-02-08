// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILSTRICTSTRINGTOKENIZER_H
#define ORGAPACHELUCENEUTILSTRICTSTRINGTOKENIZER_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilStrictStringTokenizer : NSObject {
    NSString *s_;
    unsigned short delimiter_;
    int pos_;
}




-(id)initWithNSString:(id)arg0 withChar:(unsigned short)arg1 ;
-(id)nextToken;
-(BOOL)hasMoreTokens;
-(void)dealloc;


@end


#endif