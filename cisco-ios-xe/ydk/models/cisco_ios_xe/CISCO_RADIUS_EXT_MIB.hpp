#ifndef _CISCO_RADIUS_EXT_MIB_
#define _CISCO_RADIUS_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_RADIUS_EXT_MIB {

class CiscoRadiusExtMib : public Entity
{
    public:
        CiscoRadiusExtMib();
        ~CiscoRadiusExtMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Creclientglobal; //type: CiscoRadiusExtMib::Creclientglobal
        class Creclientauthentication; //type: CiscoRadiusExtMib::Creclientauthentication
        class Creclientaccounting; //type: CiscoRadiusExtMib::Creclientaccounting

        std::shared_ptr<CISCO_RADIUS_EXT_MIB::CiscoRadiusExtMib::Creclientaccounting> creclientaccounting;
        std::shared_ptr<CISCO_RADIUS_EXT_MIB::CiscoRadiusExtMib::Creclientauthentication> creclientauthentication;
        std::shared_ptr<CISCO_RADIUS_EXT_MIB::CiscoRadiusExtMib::Creclientglobal> creclientglobal;
        
}; // CiscoRadiusExtMib


class CiscoRadiusExtMib::Creclientglobal : public Entity
{
    public:
        Creclientglobal();
        ~Creclientglobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf creclienttotalmaxinqlength; //type: uint32
        YLeaf creclienttotalmaxwaitqlength; //type: uint32
        YLeaf creclienttotalmaxdoneqlength; //type: uint32
        YLeaf creclienttotalaccessrejects; //type: uint32
        YLeaf creclienttotalaverageresponsedelay; //type: int32
        YLeaf creclientsourceportrangestart; //type: uint16
        YLeaf creclientsourceportrangeend; //type: uint16
        YLeaf creclientlastusedsourceport; //type: uint16
        YLeaf creclientlastusedsourceid; //type: uint32

}; // CiscoRadiusExtMib::Creclientglobal


class CiscoRadiusExtMib::Creclientauthentication : public Entity
{
    public:
        Creclientauthentication();
        ~Creclientauthentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf creauthclientbadauthenticators; //type: uint32
        YLeaf creauthclientunknownresponses; //type: uint32
        YLeaf creauthclienttotalpacketswithresponses; //type: uint32
        YLeaf creauthclientbufferallocfailures; //type: uint32
        YLeaf creauthclienttotalresponses; //type: uint32
        YLeaf creauthclienttotalpacketswithoutresponses; //type: uint32
        YLeaf creauthclientaverageresponsedelay; //type: int32
        YLeaf creauthclientmaxresponsedelay; //type: int32
        YLeaf creauthclientmaxbuffersize; //type: uint32
        YLeaf creauthclienttimeouts; //type: uint32
        YLeaf creauthclientdupids; //type: uint32
        YLeaf creauthclientmalformedresponses; //type: uint32
        YLeaf creauthclientlastusedsourceid; //type: uint32

}; // CiscoRadiusExtMib::Creclientauthentication


class CiscoRadiusExtMib::Creclientaccounting : public Entity
{
    public:
        Creclientaccounting();
        ~Creclientaccounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf creacctclientbadauthenticators; //type: uint32
        YLeaf creacctclientunknownresponses; //type: uint32
        YLeaf creacctclienttotalpacketswithresponses; //type: uint32
        YLeaf creacctclientbufferallocfailures; //type: uint32
        YLeaf creacctclienttotalresponses; //type: uint32
        YLeaf creacctclienttotalpacketswithoutresponses; //type: uint32
        YLeaf creacctclientaverageresponsedelay; //type: int32
        YLeaf creacctclientmaxresponsedelay; //type: int32
        YLeaf creacctclientmaxbuffersize; //type: uint32
        YLeaf creacctclienttimeouts; //type: uint32
        YLeaf creacctclientdupids; //type: uint32
        YLeaf creacctclientmalformedresponses; //type: uint32
        YLeaf creacctclientlastusedsourceid; //type: uint32

}; // CiscoRadiusExtMib::Creclientaccounting


}
}

#endif /* _CISCO_RADIUS_EXT_MIB_ */

