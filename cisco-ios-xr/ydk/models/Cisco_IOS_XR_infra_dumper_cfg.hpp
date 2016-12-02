#ifndef _CISCO_IOS_XR_INFRA_DUMPER_CFG_
#define _CISCO_IOS_XR_INFRA_DUMPER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_dumper_cfg {

class Exception : public Entity
{
    public:
        Exception();
        ~Exception();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value sparse; //type: boolean
        Value kernel_debugger; //type: empty
        Value packet_memory; //type: boolean
        Value sparse_size; //type: uint32


    class Choice1 : public Entity
    {
        public:
            Choice1();
            ~Choice1();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value compress; //type: boolean
            Value lower_limit; //type: uint32
            Value higher_limit; //type: uint32
            Value file_path; //type: string
            Value filename; //type: string




    }; // Exception::Choice1


    class Choice3 : public Entity
    {
        public:
            Choice3();
            ~Choice3();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value compress; //type: boolean
            Value lower_limit; //type: uint32
            Value higher_limit; //type: uint32
            Value file_path; //type: string
            Value filename; //type: string




    }; // Exception::Choice3


    class Choice2 : public Entity
    {
        public:
            Choice2();
            ~Choice2();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value compress; //type: boolean
            Value lower_limit; //type: uint32
            Value higher_limit; //type: uint32
            Value file_path; //type: string
            Value filename; //type: string




    }; // Exception::Choice2


        std::unique_ptr<Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice1> choice1;
        std::unique_ptr<Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice2> choice2;
        std::unique_ptr<Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice3> choice3;


}; // Exception



}
}

#endif /* _CISCO_IOS_XR_INFRA_DUMPER_CFG_ */

