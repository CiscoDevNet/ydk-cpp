#ifndef _CISCO_IOS_XR_FIB_COMMON_CFG_
#define _CISCO_IOS_XR_FIB_COMMON_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fib_common_cfg {

class Fib : public Entity
{
    public:
        Fib();
        ~Fib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value prefer_aib_routes; //type: int32


    class PbtsForwardClassFallbacks : public Entity
    {
        public:
            PbtsForwardClassFallbacks();
            ~PbtsForwardClassFallbacks();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PbtsForwardClassFallback : public Entity
        {
            public:
                PbtsForwardClassFallback();
                ~PbtsForwardClassFallback();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value forward_class_number; //type: one of uint32, enumeration
                Value fallback_type; //type: FibPbtsFallbackEnum
                ValueList fallback_class_number_array; //type: list of  uint32


                class FibPbtsForwardClassEnum;
                class FibPbtsFallbackEnum;


        }; // Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback


            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_cfg::Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback> > pbts_forward_class_fallback;


    }; // Fib::PbtsForwardClassFallbacks


        std::unique_ptr<Cisco_IOS_XR_fib_common_cfg::Fib::PbtsForwardClassFallbacks> pbts_forward_class_fallbacks;


}; // Fib


class FibPbtsFallbackEnum : public Enum
{
    public:
        static const Enum::Value list;
        static const Enum::Value any;
        static const Enum::Value drop;

};

class FibPbtsForwardClassEnum : public Enum
{
    public:
        static const Enum::Value any;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_CFG_ */

