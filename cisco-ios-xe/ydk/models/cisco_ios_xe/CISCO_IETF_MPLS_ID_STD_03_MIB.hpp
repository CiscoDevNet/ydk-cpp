#ifndef _CISCO_IETF_MPLS_ID_STD_03_MIB_
#define _CISCO_IETF_MPLS_ID_STD_03_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_ID_STD_03_MIB {

class CiscoIetfMplsIdStd03Mib : public ydk::Entity
{
    public:
        CiscoIetfMplsIdStd03Mib();
        ~CiscoIetfMplsIdStd03Mib();

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

        class Cmplsidobjects; //type: CiscoIetfMplsIdStd03Mib::Cmplsidobjects

        std::shared_ptr<CISCO_IETF_MPLS_ID_STD_03_MIB::CiscoIetfMplsIdStd03Mib::Cmplsidobjects> cmplsidobjects;
        
}; // CiscoIetfMplsIdStd03Mib


class CiscoIetfMplsIdStd03Mib::Cmplsidobjects : public ydk::Entity
{
    public:
        Cmplsidobjects();
        ~Cmplsidobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsglobalid; //type: binary
        ydk::YLeaf cmplsicc; //type: binary
        ydk::YLeaf cmplsnodeid; //type: uint32

}; // CiscoIetfMplsIdStd03Mib::Cmplsidobjects


}
}

#endif /* _CISCO_IETF_MPLS_ID_STD_03_MIB_ */

