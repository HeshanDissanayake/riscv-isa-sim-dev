


void buffer_init(StringBuffer* buf) {
    buf->start = 0;
    buf->count = 0;
    for (int i = 0; i < BUFFER_SIZE; i++) buf->entries[i] = NULL;
}

void buffer_add(StringBuffer* buf, const char* str) {
    int index = (buf->start + buf->count) % BUFFER_SIZE;

    if (buf->count == BUFFER_SIZE) {
        // Free the oldest entry before overwriting
        free(buf->entries[buf->start]);
        buf->start = (buf->start + 1) % BUFFER_SIZE;
        index = (buf->start + buf->count - 1) % BUFFER_SIZE;
    } else {
        buf->count++;
    }

    buf->entries[index] = strdup(str);  
}


