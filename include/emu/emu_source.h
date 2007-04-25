/* @header@ */

#ifndef HAVE_EMU_SOURCE_H
#define HAVE_EMU_SOURCE_H

struct emu_track_and_source;
struct emu_vertex;

uint32_t emu_source_instruction_graph_create(struct emu *e, struct emu_track_and_source *es, uint32_t datastart, uint32_t datasize);

void emu_source_bfs(struct emu_track_and_source *et, struct emu_vertex *ev);

#endif
