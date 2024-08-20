///
/// JPowertrain.hpp
/// Tue Aug 20 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Powertrain.hpp"

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "Powertrain" and the the Kotlin enum "Powertrain".
   */
  struct JPowertrain final: public jni::JavaClass<JPowertrain> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Powertrain;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum Powertrain.
     */
    [[maybe_unused]]
    Powertrain toCpp() {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<Powertrain>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JPowertrain> fromCpp(Powertrain value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldELECTRIC = clazz->getStaticField<JPowertrain>("ELECTRIC");
      static const auto fieldGAS = clazz->getStaticField<JPowertrain>("GAS");
      static const auto fieldHYBRID = clazz->getStaticField<JPowertrain>("HYBRID");
      
      switch (value) {
        case Powertrain::ELECTRIC:
          return clazz->getStaticFieldValue(fieldELECTRIC);
        case Powertrain::GAS:
          return clazz->getStaticFieldValue(fieldGAS);
        case Powertrain::HYBRID:
          return clazz->getStaticFieldValue(fieldHYBRID);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::runtime_error("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::image
