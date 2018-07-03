#ifndef _CISCO_UBE_MIB_
#define _CISCO_UBE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_UBE_MIB {

class CISCOUBEMIB : public ydk::Entity
{
    public:
        CISCOUBEMIB();
        ~CISCOUBEMIB();

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

        class CiscoUbeMIBObjects; //type: CISCOUBEMIB::CiscoUbeMIBObjects

        std::shared_ptr<cisco_ios_xe::CISCO_UBE_MIB::CISCOUBEMIB::CiscoUbeMIBObjects> ciscoubemibobjects;
        
}; // CISCOUBEMIB


class CISCOUBEMIB::CiscoUbeMIBObjects : public ydk::Entity
{
    public:
        CiscoUbeMIBObjects();
        ~CiscoUbeMIBObjects();

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

        ydk::YLeaf cubeenabled; //type: boolean
        ydk::YLeaf cubeversion; //type: string
        ydk::YLeaf cubetotalsessionallowed; //type: uint32

}; // CISCOUBEMIB::CiscoUbeMIBObjects


}
}

#endif /* _CISCO_UBE_MIB_ */

