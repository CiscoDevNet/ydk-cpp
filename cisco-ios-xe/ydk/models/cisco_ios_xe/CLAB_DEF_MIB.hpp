#ifndef _CLAB_DEF_MIB_
#define _CLAB_DEF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CLAB_DEF_MIB {

class CLABDEFMIB : public ydk::Entity
{
    public:
        CLABDEFMIB();
        ~CLABDEFMIB();

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

        class ClabSecCertObject; //type: CLABDEFMIB::ClabSecCertObject

        std::shared_ptr<cisco_ios_xe::CLAB_DEF_MIB::CLABDEFMIB::ClabSecCertObject> clabseccertobject;
        
}; // CLABDEFMIB


class CLABDEFMIB::ClabSecCertObject : public ydk::Entity
{
    public:
        ClabSecCertObject();
        ~ClabSecCertObject();

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

        ydk::YLeaf clabsrvcprvdrrootcacert; //type: binary
        ydk::YLeaf clabcvcrootcacert; //type: binary
        ydk::YLeaf clabcvccacert; //type: binary
        ydk::YLeaf clabmfgcvccert; //type: binary
        ydk::YLeaf clabmfgcacert; //type: binary

}; // CLABDEFMIB::ClabSecCertObject


}
}

#endif /* _CLAB_DEF_MIB_ */

