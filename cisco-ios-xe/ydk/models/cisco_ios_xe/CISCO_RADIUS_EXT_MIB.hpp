#ifndef _CISCO_RADIUS_EXT_MIB_
#define _CISCO_RADIUS_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_RADIUS_EXT_MIB {

class CiscoRadiusExtMib : public ydk::Entity
{
    public:
        CiscoRadiusExtMib();
        ~CiscoRadiusExtMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Creclientglobal; //type: CiscoRadiusExtMib::Creclientglobal
        class Creclientauthentication; //type: CiscoRadiusExtMib::Creclientauthentication
        class Creclientaccounting; //type: CiscoRadiusExtMib::Creclientaccounting

        std::shared_ptr<CISCO_RADIUS_EXT_MIB::CiscoRadiusExtMib::Creclientaccounting> creclientaccounting;
        std::shared_ptr<CISCO_RADIUS_EXT_MIB::CiscoRadiusExtMib::Creclientauthentication> creclientauthentication;
        std::shared_ptr<CISCO_RADIUS_EXT_MIB::CiscoRadiusExtMib::Creclientglobal> creclientglobal;
        
}; // CiscoRadiusExtMib


class CiscoRadiusExtMib::Creclientglobal : public ydk::Entity
{
    public:
        Creclientglobal();
        ~Creclientglobal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creclienttotalmaxinqlength; //type: uint32
        ydk::YLeaf creclienttotalmaxwaitqlength; //type: uint32
        ydk::YLeaf creclienttotalmaxdoneqlength; //type: uint32
        ydk::YLeaf creclienttotalaccessrejects; //type: uint32
        ydk::YLeaf creclienttotalaverageresponsedelay; //type: int32
        ydk::YLeaf creclientsourceportrangestart; //type: uint16
        ydk::YLeaf creclientsourceportrangeend; //type: uint16
        ydk::YLeaf creclientlastusedsourceport; //type: uint16
        ydk::YLeaf creclientlastusedsourceid; //type: uint32

}; // CiscoRadiusExtMib::Creclientglobal


class CiscoRadiusExtMib::Creclientauthentication : public ydk::Entity
{
    public:
        Creclientauthentication();
        ~Creclientauthentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creauthclientbadauthenticators; //type: uint32
        ydk::YLeaf creauthclientunknownresponses; //type: uint32
        ydk::YLeaf creauthclienttotalpacketswithresponses; //type: uint32
        ydk::YLeaf creauthclientbufferallocfailures; //type: uint32
        ydk::YLeaf creauthclienttotalresponses; //type: uint32
        ydk::YLeaf creauthclienttotalpacketswithoutresponses; //type: uint32
        ydk::YLeaf creauthclientaverageresponsedelay; //type: int32
        ydk::YLeaf creauthclientmaxresponsedelay; //type: int32
        ydk::YLeaf creauthclientmaxbuffersize; //type: uint32
        ydk::YLeaf creauthclienttimeouts; //type: uint32
        ydk::YLeaf creauthclientdupids; //type: uint32
        ydk::YLeaf creauthclientmalformedresponses; //type: uint32
        ydk::YLeaf creauthclientlastusedsourceid; //type: uint32

}; // CiscoRadiusExtMib::Creclientauthentication


class CiscoRadiusExtMib::Creclientaccounting : public ydk::Entity
{
    public:
        Creclientaccounting();
        ~Creclientaccounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creacctclientbadauthenticators; //type: uint32
        ydk::YLeaf creacctclientunknownresponses; //type: uint32
        ydk::YLeaf creacctclienttotalpacketswithresponses; //type: uint32
        ydk::YLeaf creacctclientbufferallocfailures; //type: uint32
        ydk::YLeaf creacctclienttotalresponses; //type: uint32
        ydk::YLeaf creacctclienttotalpacketswithoutresponses; //type: uint32
        ydk::YLeaf creacctclientaverageresponsedelay; //type: int32
        ydk::YLeaf creacctclientmaxresponsedelay; //type: int32
        ydk::YLeaf creacctclientmaxbuffersize; //type: uint32
        ydk::YLeaf creacctclienttimeouts; //type: uint32
        ydk::YLeaf creacctclientdupids; //type: uint32
        ydk::YLeaf creacctclientmalformedresponses; //type: uint32
        ydk::YLeaf creacctclientlastusedsourceid; //type: uint32

}; // CiscoRadiusExtMib::Creclientaccounting


}
}

#endif /* _CISCO_RADIUS_EXT_MIB_ */

