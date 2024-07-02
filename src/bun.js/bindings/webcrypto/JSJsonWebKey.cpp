/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WEB_CRYPTO)

#include "JSJsonWebKey.h"

#include "JSCryptoKeyUsage.h"
#include "JSDOMConvertBoolean.h"
#include "JSDOMConvertEnumeration.h"
#include "JSDOMConvertSequences.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMGlobalObject.h"
#include "JSRsaOtherPrimesInfo.h"
#include <JavaScriptCore/JSArray.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/ObjectConstructor.h>

namespace WebCore {
using namespace JSC;

#if ENABLE(WEB_CRYPTO)

template<> JsonWebKey convertDictionary<JsonWebKey>(JSGlobalObject& lexicalGlobalObject, JSValue value)
{
    VM& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    bool isNullOrUndefined = value.isUndefinedOrNull();
    auto* object = isNullOrUndefined ? nullptr : value.getObject();
    if (UNLIKELY(!isNullOrUndefined && !object)) {
        throwTypeError(&lexicalGlobalObject, throwScope);
        return {};
    }
    JsonWebKey result {};
    JSValue algValue;
    if (isNullOrUndefined)
        algValue = jsUndefined();
    else {
        algValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "alg"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!algValue.isUndefined()) {
        result.alg = convert<IDLDOMString>(lexicalGlobalObject, algValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue crvValue;
    if (isNullOrUndefined)
        crvValue = jsUndefined();
    else {
        crvValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "crv"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!crvValue.isUndefined()) {
        result.crv = convert<IDLDOMString>(lexicalGlobalObject, crvValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue dValue;
    if (isNullOrUndefined)
        dValue = jsUndefined();
    else {
        dValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "d"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!dValue.isUndefined()) {
        result.d = convert<IDLDOMString>(lexicalGlobalObject, dValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue dpValue;
    if (isNullOrUndefined)
        dpValue = jsUndefined();
    else {
        dpValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "dp"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!dpValue.isUndefined()) {
        result.dp = convert<IDLDOMString>(lexicalGlobalObject, dpValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue dqValue;
    if (isNullOrUndefined)
        dqValue = jsUndefined();
    else {
        dqValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "dq"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!dqValue.isUndefined()) {
        result.dq = convert<IDLDOMString>(lexicalGlobalObject, dqValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue eValue;
    if (isNullOrUndefined)
        eValue = jsUndefined();
    else {
        eValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "e"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!eValue.isUndefined()) {
        result.e = convert<IDLDOMString>(lexicalGlobalObject, eValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue extValue;
    if (isNullOrUndefined)
        extValue = jsUndefined();
    else {
        extValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "ext"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!extValue.isUndefined()) {
        result.ext = convert<IDLBoolean>(lexicalGlobalObject, extValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue kValue;
    if (isNullOrUndefined)
        kValue = jsUndefined();
    else {
        kValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "k"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!kValue.isUndefined()) {
        result.k = convert<IDLDOMString>(lexicalGlobalObject, kValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue key_opsValue;
    if (isNullOrUndefined)
        key_opsValue = jsUndefined();
    else {
        key_opsValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "key_ops"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!key_opsValue.isUndefined()) {
        result.key_ops = convert<IDLSequence<IDLEnumeration<CryptoKeyUsage>>>(lexicalGlobalObject, key_opsValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue ktyValue;
    if (isNullOrUndefined)
        ktyValue = jsUndefined();
    else {
        ktyValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "kty"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!ktyValue.isUndefined()) {
        result.kty = convert<IDLDOMString>(lexicalGlobalObject, ktyValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else {
        throwRequiredMemberTypeError(lexicalGlobalObject, throwScope, "kty"_s, "JsonWebKey"_s, "DOMString"_s);
        return {};
    }
    JSValue nValue;
    if (isNullOrUndefined)
        nValue = jsUndefined();
    else {
        nValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "n"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!nValue.isUndefined()) {
        result.n = convert<IDLDOMString>(lexicalGlobalObject, nValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue othValue;
    if (isNullOrUndefined)
        othValue = jsUndefined();
    else {
        othValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "oth"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!othValue.isUndefined()) {
        result.oth = convert<IDLSequence<IDLDictionary<RsaOtherPrimesInfo>>>(lexicalGlobalObject, othValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue pValue;
    if (isNullOrUndefined)
        pValue = jsUndefined();
    else {
        pValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "p"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!pValue.isUndefined()) {
        result.p = convert<IDLDOMString>(lexicalGlobalObject, pValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue qValue;
    if (isNullOrUndefined)
        qValue = jsUndefined();
    else {
        qValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "q"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!qValue.isUndefined()) {
        result.q = convert<IDLDOMString>(lexicalGlobalObject, qValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue qiValue;
    if (isNullOrUndefined)
        qiValue = jsUndefined();
    else {
        qiValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "qi"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!qiValue.isUndefined()) {
        result.qi = convert<IDLDOMString>(lexicalGlobalObject, qiValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue useValue;
    if (isNullOrUndefined)
        useValue = jsUndefined();
    else {
        useValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "use"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!useValue.isUndefined()) {
        result.use = convert<IDLDOMString>(lexicalGlobalObject, useValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue xValue;
    if (isNullOrUndefined)
        xValue = jsUndefined();
    else {
        xValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "x"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!xValue.isUndefined()) {
        result.x = convert<IDLDOMString>(lexicalGlobalObject, xValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    JSValue yValue;
    if (isNullOrUndefined)
        yValue = jsUndefined();
    else {
        yValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "y"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!yValue.isUndefined()) {
        result.y = convert<IDLDOMString>(lexicalGlobalObject, yValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    return result;
}

JSC::JSObject* convertDictionaryToJS(JSC::JSGlobalObject& lexicalGlobalObject, JSDOMGlobalObject& globalObject, const JsonWebKey& dictionary, bool ignoreExtAndKeyOps)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);

    auto result = constructEmptyObject(&lexicalGlobalObject, globalObject.objectPrototype());

    if (!IDLDOMString::isNullValue(dictionary.alg)) {
        auto algValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.alg));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "alg"_s), algValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.crv)) {
        auto crvValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.crv));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "crv"_s), crvValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.d)) {
        auto dValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.d));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "d"_s), dValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.dp)) {
        auto dpValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.dp));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "dp"_s), dpValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.dq)) {
        auto dqValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.dq));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "dq"_s), dqValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.e)) {
        auto eValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.e));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "e"_s), eValue);
    }
    if (!ignoreExtAndKeyOps && !IDLBoolean::isNullValue(dictionary.ext)) {
        auto extValue = toJS<IDLBoolean>(lexicalGlobalObject, throwScope, IDLBoolean::extractValueFromNullable(dictionary.ext));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "ext"_s), extValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.k)) {
        auto kValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.k));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "k"_s), kValue);
    }
    if (!ignoreExtAndKeyOps && !IDLSequence<IDLEnumeration<CryptoKeyUsage>>::isNullValue(dictionary.key_ops)) {
        auto key_opsValue = toJS<IDLSequence<IDLEnumeration<CryptoKeyUsage>>>(lexicalGlobalObject, globalObject, throwScope, IDLSequence<IDLEnumeration<CryptoKeyUsage>>::extractValueFromNullable(dictionary.key_ops));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "key_ops"_s), key_opsValue);
    }
    auto ktyValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, dictionary.kty);
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, JSC::Identifier::fromString(vm, "kty"_s), ktyValue);
    if (!IDLDOMString::isNullValue(dictionary.n)) {
        auto nValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.n));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "n"_s), nValue);
    }
    if (!IDLSequence<IDLDictionary<RsaOtherPrimesInfo>>::isNullValue(dictionary.oth)) {
        auto othValue = toJS<IDLSequence<IDLDictionary<RsaOtherPrimesInfo>>>(lexicalGlobalObject, globalObject, throwScope, IDLSequence<IDLDictionary<RsaOtherPrimesInfo>>::extractValueFromNullable(dictionary.oth));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "oth"_s), othValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.p)) {
        auto pValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.p));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "p"_s), pValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.q)) {
        auto qValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.q));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "q"_s), qValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.qi)) {
        auto qiValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.qi));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "qi"_s), qiValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.use)) {
        auto useValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.use));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "use"_s), useValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.x)) {
        auto xValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.x));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "x"_s), xValue);
    }
    if (!IDLDOMString::isNullValue(dictionary.y)) {
        auto yValue = toJS<IDLDOMString>(lexicalGlobalObject, throwScope, IDLDOMString::extractValueFromNullable(dictionary.y));
        RETURN_IF_EXCEPTION(throwScope, {});
        result->putDirect(vm, JSC::Identifier::fromString(vm, "y"_s), yValue);
    }
    return result;
}

#endif

} // namespace WebCore

#endif // ENABLE(WEB_CRYPTO)
