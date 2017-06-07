#ifndef _CISCO_IOS_XE_CHECKPOINT_ARCHIVE_OPER_
#define _CISCO_IOS_XE_CHECKPOINT_ARCHIVE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_checkpoint_archive_oper {

class CheckpointArchive : public Entity
{
    public:
        CheckpointArchive();
        ~CheckpointArchive();

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

        YLeaf max; //type: uint8
        YLeaf current; //type: uint8
        YLeaf recent; //type: string
        class Archives; //type: CheckpointArchive::Archives

        std::shared_ptr<Cisco_IOS_XE_checkpoint_archive_oper::CheckpointArchive::Archives> archives;
        
}; // CheckpointArchive


class CheckpointArchive::Archives : public Entity
{
    public:
        Archives();
        ~Archives();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Archive; //type: CheckpointArchive::Archives::Archive

        std::vector<std::shared_ptr<Cisco_IOS_XE_checkpoint_archive_oper::CheckpointArchive::Archives::Archive> > archive;
        
}; // CheckpointArchive::Archives


class CheckpointArchive::Archives::Archive : public Entity
{
    public:
        Archive();
        ~Archive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf name; //type: string

}; // CheckpointArchive::Archives::Archive


}
}

#endif /* _CISCO_IOS_XE_CHECKPOINT_ARCHIVE_OPER_ */

