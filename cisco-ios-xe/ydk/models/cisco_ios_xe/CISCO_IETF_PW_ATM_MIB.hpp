#ifndef _CISCO_IETF_PW_ATM_MIB_
#define _CISCO_IETF_PW_ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ATM_MIB {

class CISCOIETFPWATMMIB : public ydk::Entity
{
    public:
        CISCOIETFPWATMMIB();
        ~CISCOIETFPWATMMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class CpwVcAtmTable; //type: CISCOIETFPWATMMIB::CpwVcAtmTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ATM_MIB::CISCOIETFPWATMMIB::CpwVcAtmTable> cpwvcatmtable;
        
}; // CISCOIETFPWATMMIB


class CISCOIETFPWATMMIB::CpwVcAtmTable : public ydk::Entity
{
    public:
        CpwVcAtmTable();
        ~CpwVcAtmTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CpwVcAtmEntry; //type: CISCOIETFPWATMMIB::CpwVcAtmTable::CpwVcAtmEntry

        ydk::YList cpwvcatmentry;
        
}; // CISCOIETFPWATMMIB::CpwVcAtmTable


class CISCOIETFPWATMMIB::CpwVcAtmTable::CpwVcAtmEntry : public ydk::Entity
{
    public:
        CpwVcAtmEntry();
        ~CpwVcAtmEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwatmif; //type: int32
        ydk::YLeaf cpwatmvpi; //type: int32
        ydk::YLeaf cpwatmvci; //type: int32
        ydk::YLeaf cpwatmclpqosmapping; //type: boolean
        ydk::YLeaf cpwatmrowstatus; //type: RowStatus
        ydk::YLeaf cpwatmoamcellsupported; //type: boolean
        ydk::YLeaf cpwatmqosscalingfactor; //type: int32
        ydk::YLeaf cpwatmcellpacking; //type: boolean
        ydk::YLeaf cpwatmmncp; //type: int32
        ydk::YLeaf cpwatmpeermncp; //type: int32
        ydk::YLeaf cpwatmencap; //type: CpwAtmEncap
        ydk::YLeaf cpwatmmcpttimeout; //type: int32
        ydk::YLeaf cpwatmcellsreceived; //type: uint32
        ydk::YLeaf cpwatmcellssent; //type: uint32
        ydk::YLeaf cpwatmcellsrejected; //type: uint32
        ydk::YLeaf cpwatmcellstagged; //type: uint32
        ydk::YLeaf cpwatmhccellsreceived; //type: uint64
        ydk::YLeaf cpwatmhccellsrejected; //type: uint64
        ydk::YLeaf cpwatmhccellstagged; //type: uint64
        ydk::YLeaf cpwatmavgcellspacked; //type: uint32
        ydk::YLeaf cpwatmpktsreceived; //type: uint32
        ydk::YLeaf cpwatmpktssent; //type: uint32
        ydk::YLeaf cpwatmpktsrejected; //type: uint32
        class CpwAtmEncap;

}; // CISCOIETFPWATMMIB::CpwVcAtmTable::CpwVcAtmEntry

class CISCOIETFPWATMMIB::CpwVcAtmTable::CpwVcAtmEntry::CpwAtmEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_IETF_PW_ATM_MIB_ */

