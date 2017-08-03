#ifndef _CISCO_PING_MIB_
#define _CISCO_PING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PING_MIB {

class CiscoPingMib : public ydk::Entity
{
    public:
        CiscoPingMib();
        ~CiscoPingMib();

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

        class Ciscopingtable; //type: CiscoPingMib::Ciscopingtable

        std::shared_ptr<CISCO_PING_MIB::CiscoPingMib::Ciscopingtable> ciscopingtable;
        
}; // CiscoPingMib


class CiscoPingMib::Ciscopingtable : public ydk::Entity
{
    public:
        Ciscopingtable();
        ~Ciscopingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscopingentry; //type: CiscoPingMib::Ciscopingtable::Ciscopingentry

        std::vector<std::shared_ptr<CISCO_PING_MIB::CiscoPingMib::Ciscopingtable::Ciscopingentry> > ciscopingentry;
        
}; // CiscoPingMib::Ciscopingtable


class CiscoPingMib::Ciscopingtable::Ciscopingentry : public ydk::Entity
{
    public:
        Ciscopingentry();
        ~Ciscopingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscopingserialnumber; //type: int32
        ydk::YLeaf ciscopingprotocol; //type: Cisconetworkprotocol
        ydk::YLeaf ciscopingaddress; //type: binary
        ydk::YLeaf ciscopingpacketcount; //type: int32
        ydk::YLeaf ciscopingpacketsize; //type: int32
        ydk::YLeaf ciscopingpackettimeout; //type: int32
        ydk::YLeaf ciscopingdelay; //type: int32
        ydk::YLeaf ciscopingtraponcompletion; //type: boolean
        ydk::YLeaf ciscopingsentpackets; //type: uint32
        ydk::YLeaf ciscopingreceivedpackets; //type: uint32
        ydk::YLeaf ciscopingminrtt; //type: int32
        ydk::YLeaf ciscopingavgrtt; //type: int32
        ydk::YLeaf ciscopingmaxrtt; //type: int32
        ydk::YLeaf ciscopingcompleted; //type: boolean
        ydk::YLeaf ciscopingentryowner; //type: string
        ydk::YLeaf ciscopingentrystatus; //type: Rowstatus
        ydk::YLeaf ciscopingvrfname; //type: binary

}; // CiscoPingMib::Ciscopingtable::Ciscopingentry


}
}

#endif /* _CISCO_PING_MIB_ */

