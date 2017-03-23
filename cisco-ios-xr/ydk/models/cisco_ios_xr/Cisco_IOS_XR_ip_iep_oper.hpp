#ifndef _CISCO_IOS_XR_IP_IEP_OPER_
#define _CISCO_IOS_XR_IP_IEP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_iep_oper {

class ExplicitPaths : public Entity
{
    public:
        ExplicitPaths();
        ~ExplicitPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Identifiers; //type: ExplicitPaths::Identifiers
        class Names; //type: ExplicitPaths::Names

        std::shared_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Identifiers> identifiers;
        std::shared_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Names> names;


}; // ExplicitPaths


class ExplicitPaths::Identifiers : public Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Identifier; //type: ExplicitPaths::Identifiers::Identifier

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Identifiers::Identifier> > identifier;


}; // ExplicitPaths::Identifiers


class ExplicitPaths::Identifiers::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf identifier_id; //type: int32
        YLeaf status; //type: IepStatusEnum

        class Address; //type: ExplicitPaths::Identifiers::Identifier::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Identifiers::Identifier::Address> > address;


}; // ExplicitPaths::Identifiers::Identifier


class ExplicitPaths::Identifiers::Identifier::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf if_index; //type: uint32
        YLeaf address_type; //type: IepAddressEnum
        YLeaf hop_type; //type: IepHopEnum
        YLeaf address; //type: string
        YLeaf mpls_label; //type: uint32



}; // ExplicitPaths::Identifiers::Identifier::Address


class ExplicitPaths::Names : public Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Name; //type: ExplicitPaths::Names::Name

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Names::Name> > name;


}; // ExplicitPaths::Names


class ExplicitPaths::Names::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_name; //type: string
        YLeaf status; //type: IepStatusEnum

        class Address; //type: ExplicitPaths::Names::Name::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Names::Name::Address> > address;


}; // ExplicitPaths::Names::Name


class ExplicitPaths::Names::Name::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf if_index; //type: uint32
        YLeaf address_type; //type: IepAddressEnum
        YLeaf hop_type; //type: IepHopEnum
        YLeaf address; //type: string
        YLeaf mpls_label; //type: uint32



}; // ExplicitPaths::Names::Name::Address

class IepStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class IepAddressEnum : public Enum
{
    public:
        static const Enum::YLeaf next;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf exclude_srlg;

};

class IepHopEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IEP_OPER_ */
