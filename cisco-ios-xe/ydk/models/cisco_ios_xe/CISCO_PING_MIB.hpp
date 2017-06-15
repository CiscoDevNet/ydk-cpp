#ifndef _CISCO_PING_MIB_
#define _CISCO_PING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_PING_MIB {

class CiscoPingMib : public Entity
{
    public:
        CiscoPingMib();
        ~CiscoPingMib();

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

        class Ciscopingtable; //type: CiscoPingMib::Ciscopingtable

        std::shared_ptr<CISCO_PING_MIB::CiscoPingMib::Ciscopingtable> ciscopingtable_;
        
}; // CiscoPingMib


class CiscoPingMib::Ciscopingtable : public Entity
{
    public:
        Ciscopingtable();
        ~Ciscopingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscopingentry; //type: CiscoPingMib::Ciscopingtable::Ciscopingentry

        std::vector<std::shared_ptr<CISCO_PING_MIB::CiscoPingMib::Ciscopingtable::Ciscopingentry> > ciscopingentry_;
        
}; // CiscoPingMib::Ciscopingtable


class CiscoPingMib::Ciscopingtable::Ciscopingentry : public Entity
{
    public:
        Ciscopingentry();
        ~Ciscopingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscopingserialnumber; //type: int32
        YLeaf ciscopingprotocol; //type: CisconetworkprotocolEnum
        YLeaf ciscopingaddress; //type: binary
        YLeaf ciscopingpacketcount; //type: int32
        YLeaf ciscopingpacketsize; //type: int32
        YLeaf ciscopingpackettimeout; //type: int32
        YLeaf ciscopingdelay; //type: int32
        YLeaf ciscopingtraponcompletion; //type: boolean
        YLeaf ciscopingsentpackets; //type: uint32
        YLeaf ciscopingreceivedpackets; //type: uint32
        YLeaf ciscopingminrtt; //type: int32
        YLeaf ciscopingavgrtt; //type: int32
        YLeaf ciscopingmaxrtt; //type: int32
        YLeaf ciscopingcompleted; //type: boolean
        YLeaf ciscopingentryowner; //type: string
        YLeaf ciscopingentrystatus; //type: RowstatusEnum
        YLeaf ciscopingvrfname; //type: binary

}; // CiscoPingMib::Ciscopingtable::Ciscopingentry


}
}

#endif /* _CISCO_PING_MIB_ */

